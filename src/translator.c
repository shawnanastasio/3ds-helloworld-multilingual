#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <3ds.h>

/*
Translates "Hello World" into requested language code
*/
char* get_hello_world(int code)
{
  //char response[50];
  char* response_ptr = (char*)malloc(50);

  switch(code) {
    case 0 :
      strcpy(response_ptr, "Kon'nichiwa sekai!");
      break;
    case 1 :
      strcpy(response_ptr, "Hello, World!");
      break;
    case 2 :
      strcpy(response_ptr, "Bonjour le monde!");
      break;
    case 3 :
      strcpy(response_ptr, "Hallo Welt!");
      break;
    case 4 :
      strcpy(response_ptr, "Ciao mondo!")
      break;
    case 5 :
      strcpy(response_ptr, "Hola mundo!");
      break;
    case 6 :
      strcpy(response_ptr, "Ni hao, shijie!");
      break;
    case 7 :
      strcpy(response_ptr, "Annyeonghaseyo, segye!");
      break;
    case 8 :
      strcpy(response_ptr, "Hallo Wereld!");
      break;
    case 9 :
      strcpy(response_ptr, "Ola Mundo!");
      break;
    case 10 :
      strcpy(response_ptr, "Privet mir!");
      break;
    case 11 :
      strcpy(response_ptr, "Ni hao, shijie!");
      break;
    default:
      strcpy(response_ptr, "Unsupported Language!");
      break;
  }

  //response_ptr = response;
  return response_ptr;
}
