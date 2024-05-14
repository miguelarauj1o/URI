#include <cstdio>

char mesa[8][8];

bool ACIMA(int x, int y){

  if (y == 0)
    return false;
  
  int i;

  for (i = y-1; i >= 0; i--) {              
    switch (mesa[x][i]) {
      case 0:
        break;
      case 'R':
        return true;
      case 'T':
        return true;
      case 'B':
        return false;
      case 'P':
        return false;
      case 'W':
        if (i == y-1)
          return true;
        else
          return false;
    }
  }
  
  return false;
}

bool ABAIXO(int x, int y){

  if (y == 7)
    return false;
  
  int i;

  for (i = y+1; i <= 7; i++) {              
    switch (mesa[x][i]) {
      case 0:
        break;
      case 'R':
        return true;
      case 'T':
        return true;
      case 'B':
        return false;
      case 'P':
        return false;
      case 'W':
        if (i == y+1)
          return true;
        else
          return false;
    }
  }
  
  return false;
}

bool DIREITA(int x, int y){

  if (x == 7)
    return false;
  
  int i;

  for (i = x+1; i <= 7; i++) {              
    switch (mesa[i][y]) {
      case 0:
        break;
      case 'R':
        return true;
      case 'T':
        return true;
      case 'B':
        return false;
      case 'P':
        return false;
      case 'W':
        if (i == x+1)
          return true;
        else
          return false;
    }
  }
  
  return false;
}

bool ESQUERDA(int x, int y){

  if (x == 0)
    return false;
  
  int i;

  for (i = x-1; i >= 0; i--) {              
    switch (mesa[i][y]) {
      case 0:
        break;
      case 'R':
        return true;
      case 'T':
        return true;
      case 'B':
        return false;
      case 'P':
        return false;
      case 'W':
        if (i == y-1)
          return true;
        else
          return false;
    }
  }
  
  return false;
}

bool DIAG_1(int x, int y){

  if (x == 0 || y == 0)
    return false;
  
  int i,j;

  for (i = x-1,j = y-1; i >= 0 && j >= 0; i--,j--) {              
    switch (mesa[i][j]) {
      case 0:
        break;
      case 'R':
        return true;
      case 'T':
        return false;
      case 'B':
        return true;
      case 'P':
        return false;
      case 'W':
        if (j == y-1)
          return true;
        else
          return false;
    }
  }
  
  return false;
}

bool DIAG_2(int x, int y){

  if (x == 7 || y == 0)
    return false;
  
  int i,j;

  for (i = x+1,j = y-1; i <= 7 && j >= 0; i++,j--) {
    switch (mesa[i][j]) {
      case 0:
        break;
      case 'R':
        return true;
      case 'T':
        return false;
      case 'B':
        return true;
      case 'P':
        return false;
      case 'W':
        if (j == y-1)
          return true;
        else
          return false;
    }
  }
  
  return false;
}

bool DIAG_3(int x, int y){

  if (x == 0 || y == 7)
    return false;
  
  int i,j;

  for (i = x-1,j = y+1; i >= 0 && j <= 7; i--,j++) {
    switch (mesa[i][j]) {
      case 0:
        break;
      case 'R':
        return true;
      case 'T':
        return false;
      case 'B':
        return true;
      case 'P':
        if (j == y+1)
          return true;
        else
          return false;
      case 'W':
        if (j == y+1)
          return true;
        else
          return false;
    }
  }
  
  return false;
}

bool DIAG_4(int x, int y){

  if (x == 7 || y == 7)
    return false;
  
  int i,j;

  for (i = x+1,j = y+1; i <= 7 && j <= 7; i++,j++) {
    switch (mesa[i][j]) {
      case 0:
        break;
      case 'R':
        return true;
      case 'T':
        return false;
      case 'B':
        return true;
      case 'P':
        if (j == y+1)
          return true;
        else
          return false;
      case 'W':
        if (j == y+1)
          return true;
        else
          return false;
    }
  }
  
  return false;
}

int main() {
  int N, rei_x, rei_y;
  int i,j;
  char str[3];
  bool XM = false;
  int flag = 0;

  while (scanf("%d",&N) != EOF) {
      flag = 0;
    XM = false;
    
    for (i = 0; i < 8; i++){
      for (j = 0; j < 8; j++){
        mesa[i][j] = 0;
      }
    }
    
    for (i = 0; i < N; i++) {
      scanf("%s",&str);
      mesa[str[1]-'a'][str[2]-'1'] = str[0];
    }

    scanf("%s",&str);
    rei_x = str[1]-'a';
    rei_y = str[2]-'1';
    
    for (i = rei_x-1; i <= rei_x+1; i++) {
        if(flag == 1) break;
      if (i >= 0 && i <= 7) {
        for (j = rei_y-1; j <= rei_y+1; j++) {
          if (j >= 0 && j <= 7){
            if (ACIMA(i,j) == true) XM = true;
            else if (ABAIXO(i,j) == true) XM = true;
            else if (DIREITA(i,j) == true) XM = true;
            else if (ESQUERDA(i,j) == true) XM = true;
            else if (DIAG_1(i,j) == true) XM = true;
            else if (DIAG_2(i,j) == true) XM = true;
            else if (DIAG_3(i,j) == true) XM = true;
            else if (DIAG_4(i,j) == true) XM = true;
            else {
              XM = false;
              flag = 1;
              break;
            }
          }
        }
      }
    }
    if (XM)
      printf("SIM\n");
    else
      printf("NAO\n");
    
  }
}
