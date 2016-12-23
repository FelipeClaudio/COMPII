/*Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2016/2
Prof. Marcelo Luiz Drumond Lanza
Autor: Felipe Claudio da Silva Santos

$Author$
$Date$
$Log$
*/ 

#ifndef FCSSUMLTYPES_H
#define FCSSUMLTYPES_H "@(#)fcssUmlTypes.h $Revisions$"

#include "fcssUmlConst.h"

typedef enum name
{
	false,
	true,
} boolean;

typedef enum 
{
	fcssUmlEnglish,
	fcssUmlPortuguese,
	fcssUmlLanguagesAmount,
} fcssUmlLanguageType;


typedef unsigned long long fcssUmlUserIdentifierType;

typedef unsigned long long  fcssUmlProfileType;

typedef struct stuctFcssUmlUserDataType
{
	fcssUmlUserIdentifierType identifier;
	char 																	nickName [FCSS_UML_NICKNAME_LENGTH + 1];
	char 																	password [FCSS_UML_PASSWORD_LENGTH + 1];
	char 																	passwordConfirmation [FCSS_UML_PASSWORD_LENGTH + 1];
	fcssUmlProfileType 										profileType;
	char 																	fullName [FCSS_UML_FULL_NAME_LENGTH + 1];
	char 																	fullNameConfirmation [FCSS_UML_FULL_NAME_LENGTH + 1];
	char 																	email [FCSS_UML_EMAIL_LENGTH + 1];
	char 																	emailConfirmation [FCSS_UML_EMAIL_LENGTH + 1];
	struct stuctFcssUmlUserDataType 			*previous, *next;
} fcssUmlUserDataType;

typedef struct
{
} fcssUmlConfigurationOptionsType;

/*
 typedef struct option 
 {
     const char *name;
     int         has_arg;
     int        *flag;
     int         val;
 }	fcssLongOptions;
*/

typedef enum 
{
	HELP,
	ADD_USER,
	NCURSES
} fcssFunctionSelect;

typedef enum 
{
	NOTHING_SELECTED_NCURSES = 0,
	HELP_NCURSES 						 = 1,
	ADD_USER_NCURSES						,
	EXIT_NCURSES
} fcssNcursesMenuOptions;

#endif

/* $RCSfile$ */
