#ifndef __FILE_H__
#define __FILE_H__

#define NAME_EMPTY ""
#define EMAIL_EMPTY ""
#define ID_EMPTY -1

typedef struct _ADDR {
	int id;
	char name[20];
	char tel[20];
	char addr[30];
	char email[50];
} ADDR;

void file_write_rand(ADDR ad[], char filename[], int len);
void file_write(ADDR ad, char filename[]);
void file_read(char filename[]);
void file_del_all(char filename[]);
void file_search(char filename[], char name[]);
void file_search_id(char filename[], int id);
void file_search_email(char filename[], char email[]);
void file_delete(char filename[], char delName[]);
void file_delete2(char filename[], char delName[]);
void file_update(char filename[], char sname[], char dname[]);

#endif