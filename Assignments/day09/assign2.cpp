#include<cstdio>

int main()
{
	int slno = 1;
	int id_01, id_02, id_03, id_04, id_05,i;
	char sName_01[20], sName_02[20], sName_03[20], sName_04[20], sName_05[20];
	float m1_01, m1_02, m1_03, m1_04, m1_05;
	float m2_01, m2_02, m2_03, m2_04, m2_05;
	float m3_01, m3_02, m3_03, m3_04, m3_05;
	float m4_01, m4_02, m4_03, m4_04, m4_05;
	float avg_01, avg_02, avg_03, avg_04, avg_05;
	printf("Enter student1 name: ");
	scanf("%s", sName_01);
	printf("Enter student2 name: ");
	scanf("%s", sName_02);
	printf("Enter student3 name: ");
	scanf("%s", sName_03);
	printf("Enter student4 name: ");
	scanf("%s", sName_04);
	printf("Enter student5 name: ");
	scanf("%s", sName_05);
	printf("Enter Student1 Id No and 4 subject marks:");
	scanf("%d%f%f%f%f", &id_01, &m1_01, &m2_01, &m3_01, &m4_01);
	printf("Enter Student2 Id No and 4 subject marks:");
	scanf("%d%f%f%f%f", &id_02, &m1_02, &m2_02, &m3_02, &m4_02);
	printf("Enter Student3 Id No and 4 subject marks:");
	scanf("%d%f%f%f%f", &id_03, &m1_03, &m2_03, &m3_03, &m4_03);
	printf("Enter Student4 Id No and 4 subject marks:");
	scanf("%d%f%f%f%f", &id_04, &m1_04, &m2_04, &m3_04, &m4_04);
	printf("Enter Student5 Id No and 4 subject marks:");
	scanf("%d%f%f%f%f", &id_05, &m1_05, &m2_05, &m3_05, &m4_05);
	avg_01 = (m1_01 + m2_01 + m3_01 + m4_01) / 4.0;
	avg_02 = (m1_02 + m2_02 + m3_02 + m4_02) / 4.0;
	avg_03 = (m1_03 + m2_03 + m3_03 + m4_03) / 4.0;
	avg_04 = (m1_04 + m2_04 + m3_04 + m4_04) / 4.0;
	avg_05 = (m1_05 + m2_05 + m3_05 + m4_05) / 4.0;
	slno = 1;
	for (i = 0;i < 30;i++)
		printf("=");
	printf("\n");
	printf("slno | id | name");
	for (i = 0;i < 30;i++)
		printf("=");
	printf("\n %03d|%03d\t|", slno++);
	printf("\n %03d|%03d\t|", id_01);
	printf("\n %03d|%03s\t|", sName_01);
	printf("\n %03d|%03f\t|", avg_01);
	return 0;
}

