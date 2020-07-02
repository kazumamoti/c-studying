#include<stdio.h>
/*成人判定フラグ*/
#define ADALT_FLAG_ON 0x01
#define ADALT_FLAG_OFF 0x00

typedef struct {
	char *name;
	int age;
	char adaltFlag;
}Person;

/* 関数のプロトタイプ宣言 */
void JudgeAdaltFlag(Person *person);
void Dummy(Person *person);

int main(void)
{
	Person sato = {"佐藤",2,ADALT_FLAG_OFF};
	Person fuzimoto = {"藤本",42,ADALT_FLAG_OFF};
	Person *p1;
	Person *p2;
	
	void (*po[2])() = {JudgeAdaltFlag,Dummy};
	
	
	/*p1 = &sato;
	p2 = &fuzimoto;
	p2->age = 93;*/
	
	/*成人判定*/
	/*JudgeAdaltFlag(p1);
	JudgeAdaltFlag(p2);*/
	(*po[1])(&sato);
	(*po[1])(&fuzimoto);
	
	/*printf("名前は%s,年齢は%d歳で、%sです。\n",p1->name,p1->age,(p1->adaltFlag == ADALT_FLAG_ON)? "成人":"未成年");
	printf("名前は%s,年齢は%d歳です、%sです。\n",p2->name,p2->age,(p2->adaltFlag == ADALT_FLAG_ON)? "成人":"未成年");*/
	printf("名前は%s,年齢は%d歳で、%sです。\n",sato.name,sato.age,(sato.adaltFlag == ADALT_FLAG_ON)? "成人":"未成年");
	printf("名前は%s,年齢は%d歳で、%sです。\n",fuzimoto.name,fuzimoto.age,(fuzimoto.adaltFlag == ADALT_FLAG_ON)? "成人":"未成年");
	
	/* コメント追加 */
	printf("コメントを追加しました\n");
	printf("競合が起きるかテストをする\n");
	
	return 0;
}

void JudgeAdaltFlag(Person *person){
	/* 20歳以上の場合は成年判定 */
	if(person->age >= 20){
		person->adaltFlag = ADALT_FLAG_ON;
	} else {
		person->adaltFlag = ADALT_FLAG_OFF;
	}
	
	return;
}

void Dummy(Person *person){}
