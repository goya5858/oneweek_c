#include <stdio.h>
#include <string.h>

//  �w���̃f�[�^������\����
typedef struct {
	int id;         //  �w���ԍ�
	char name[256]; //  ���O
	int age;        //  �N��
}student_data;

//  �\���̂̃f�[�^��\������֐�
void setData(student_data*, int, char*, int);
void showData(student_data*);

void main() {
	student_data data[4];
	int i;
	int id[] = { 1,2,3,4 };
	char name[][256] = { "�R�c���Y","�����ǎq","���c��","���c�D�q" };
	int age[] = { 18,19,18,18 };
	//  �f�[�^�̐ݒ�
	for (i = 0; i < 4; i++) {
		setData(&data[i], id[i], name[i], age[i]);
	}
	//  �f�[�^�̓����\��
	for (i = 0; i < 4; i++) {
		showData(&data[i]);
	}
	return;
}
//  �f�[�^�̃Z�b�g
void setData(student_data* data, int id, char* name, int age) {
	data->id = id;               //  id�̃R�s�[
	strcpy(data->name, name); //  ���O�̃R�s�[
	data->age = age;         //  �N��̃R�s�[
}
//  �f�[�^�̕\��
void showData(student_data* data) {
	printf("�w���ԍ�:%d ���O:%s �N��:%d\n", data->id, data->name, data->age);
}