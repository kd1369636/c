#include<stdio.h>
main()
{
	int max_score,score = 0;
	char ch, max_name[20],name[20];
	FILE* fp;
	//score.txt����̓ǂݍ��ݏ���
	//1�A�t�@�C���̃I�[�v��
	fp = fopen("score.txt", "r");
	//2.max_name,max_score�̓ǂݍ���
	fscanf(fp, "%s%d", max_name, &max_score);
	// �R�A�t�@�C���̃N���[�Y
	fclose(fp);
	// �S��ʏ�ɍō����_�҂̏���\��
	printf("�ō����_�@���O�F%s �X�R�A:%d^n", max_name, max_score);	
	printf("�v���C���[�̖��O:");
	scanf("%s", name);
	while (1)
	{
		printf("���݂̃X�R�A:%d('e'�ŏI��\n", score);
		ch = getch();
		if (ch == 'e')
		{
			break;
		}
		score++;
		if (score > max_score)
		{
			fp = fopen("score.txt", "w");
			fprintf(fp, "%s\n%d\n", name, score);
			fclose(fp);
			printf("�n�C�X�R�A�X�V\n");
		}
		
	}

}