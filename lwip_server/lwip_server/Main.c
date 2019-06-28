#include <syslog.h>
#include <stdio.h>
#include <string.h>
/* lwIP headers */
#include "lwip/api.h"
#include "lwip/tcpip.h"
#include "lwip/memp.h"
#include "lwip/tcp.h"
#include "lwip/udp.h"
#include "netif/etharp.h"
#include "lwip/dhcp.h"
#include "lwip/ip_addr.h"
#include "lwip/sockets.h"
#include "lwip/netdb.h"

void root_task(){

	int sockfd;

	int new_sockfd;

	unsigned int writer_len;

	struct sockaddr_in reader_addr;

	struct sockaddr_in writer_addr;

	char buf[100];
	/* �\�P�b�g�̐��� */

	if ((sockfd = socket(PF_INET, SOCK_STREAM, 0)) < 0)
	{
		//�\�P�b�g���������s�����ꍇ��-1���Ԃ����
		perror("reader: socket");

		exit(1);
	}

	/* �ʐM�|�[�g�E�A�h���X�̐ݒ� */

	bzero((char *)&reader_addr, sizeof(reader_addr));

	reader_addr.sin_family = PF_INET;	//�v���g�R���t�@�~��

	reader_addr.sin_addr.s_addr = lwip_htonl(INADDR_ANY);	//INADDR_ANY=0.0.0.0�@�ǂ̃A�h���X����̐ڑ��ł��󂯓����悤�ɑ҂��󂯂�

	reader_addr.sin_port = lwip_htons(100);					//�|�[�g�ԍ�

	/* �\�P�b�g�ɃA�h���X��|�[�g�ԍ������т��� */

	if (bind(sockfd, (struct sockaddr *)&reader_addr, sizeof(reader_addr)) < 0)	//�����͏��Ƀ\�P�b�g�ԍ��A�A�h���X��|�[�g�ԍ����i�[�����\���̂ւ̃|�C���^�A��2�����̃T�C�Y
	{

		perror("reader: bind");

		exit(1);
	}

	/* �R�l�N�g�v���������܂ő҂���ݒ� */

	if (listen(sockfd, 5) < 0)
	{

		perror("reader: listen");

		close(sockfd);

		exit(1);
	}

	/* �R�l�N�g�v����҂Baccept()�����s�������_�ŃT�[�o�[���v���O�����͈�U��~���� */

	if ((new_sockfd = accept(sockfd, (struct sockaddr *)&writer_addr,&writer_len)) < 0)
	{
		/* accept()�̓N���C�A���g����̐ڑ��v��������Ɠ����ɐV�����\�P�b�g�𐶐�����B
		   �V�����\�P�b�g�̓N���C�A���g�Ƃ̐ڑ��Ɏg����\�P�b�g�ŁA���Ƃ��Ƃ̃\�P�b�g�͎��̐ڑ��v���̎�t�̂��߂Ɏg����
		�@�Ԃ�l�͐V�����\�P�b�g�̔ԍ��ɂȂ�B���s������-1��Ԃ�
		*/
		perror("reader: accept");

		exit(1);
	}
	recv(new_sockfd,buf,sizeof(char),0);
	syslog(LOG_INFO,"received data:%s\n",buf);
	close(sockfd); /* �\�P�b�g��� */
}
/*
void simple_server(int sockfd)
{

	char buf[1];

	int buf_len;

	while ((buf_len = read(new_sockfd, buf, 1)) > 0)
	{

		write(1, buf, buf_len);
	}

	close(new_sockfd); // �\�P�b�g��� 
}
*/