#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SKIL_NUM 3
#define MOB_NUM 3


// �����Ȃ��Ő����� UNIT �ōĒ�`
typedef unsigned int UNIT;

typedef struct		// �X�L���^�\����
{
	char name[20];	// �X�L����
	int type;		// �X�L���̎��
	int use_mp;		// �g�pMP��
	int effect;		// �X�L������
}Skill;

typedef struct		// �X�y�b�N�^�\����
{
	char name[20];	// ���O
	int hp;			// HP
	int atk;		// �U����
	int def;		// �h���
	UNIT state;		// ���
}Spec;

typedef struct				// �L�����N�^�[�^�\����
{
	Spec sp;				// �X�y�b�N�^�\���̕ϐ�
	int maxhp;				// �ő�HP
	int mp;					// MP
	Skill skl[SKIL_NUM];	// �X�L���^�\���̔z��
}Chara;

typedef struct	// ���u�^�\����
{
	Spec sp;	// �X�y�b�N�^�\���̕ϐ�
	int rate;	// ��Ԉُ�U�������m�� ( % �\�L) 
}Mob;

enum Bitstate
{
	Base = 0,			// 0000 0000 �ʏ���
	Poison = 1 << 0,		// 0000 0001 �ǂ����
	Sleep = 1 << 1,		// 0000 0010 ������
	Paralysis = 1 << 2,		// 0000 0100 �܂Џ��
	Burn = 1 << 3,		// 0000 1000 �Ώ����
	AtkUp = 1 << 4,		// 0001 0000 �U���̓A�b�v���
	AtkDown = 1 << 5		// 0010 0000 �U���̓_�E�����
};

typedef unsigned int UNIT;

void DisplayStatus(UNIT s);
void ChangeFlg(UNIT* s);
void ClearFlag(UNIT* s);

main()
{
	UNIT MyState = Base;

	ChangeFlg(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}

void DisplayStatus(UNIT s)
{
	printf("\n***** ���݂̏�� *****\n");
	if (s & Poison)
	{
		printf("��\n");
	}
	if (s & Sleep)
	{
		printf("����\n");
	}
	if (s & Paralysis)
	{
		printf("�܂�\n");
	}
	if (s & Burn)
	{
		printf("�Ώ�\n");
	}
	if (s & AtkUp)
	{
		printf("�U���̓A�b�v\n");
	}
	if (s & AtkDown)
	{
		printf("�U���̓_�E��\n");
	}
	if (s == Base)
	{
		printf("�ʏ���\n");
	}
	printf("**********************\n");
}

void ChangeFlg(UNIT* s)
{
	int a;
	while (1)
	{
		printf("\n�ǂ̏�Ԃɂ��܂����H\n");
		printf("�P�F��\n�Q�F����\n�R�F���\n�S�F�Ώ�\n�T�F�U����\n�U�F�U����\n�O�F�I��\n");
		printf("\n�����A�ǂ����� => ");
		scanf("%d", &a);
		
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
			case 1:
				*s |= Poison;
				break;
			case 2:
				*s |= Sleep;
				break;
			case 3:
				*s |= Paralysis;
				break;
			case 4:
				*s |= Burn;
				break;
			case 5:
				*s |= AtkUp;
				break;
			case 6:
				*s |= AtkDown;
				break;
		}
	}
}

void ClearFlag(UNIT* s)
{
	int a;
	while (1)
	{
		printf("\n�ǂ̏�Ԃ������܂����H\n");
		printf("�P�F��\n�Q�F����\n�R�F���\n�S�F�Ώ�\n�T�F�U����\n�U�F�U����\n�V�F�S����\n�O�F�I��\n");
		printf("\n�����A�ǂ����� =>");
		scanf("%d", &a);

		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s = Base;
			break;
		}
	}
}