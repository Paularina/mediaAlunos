#include <stdio.h>

int main(void) {
  const int  bimestres = 4;
  const int alunos = 4;

  float notasAlunos[bimestres][alunos]= {0};
  float mediaAlunos[alunos] = {0};

  float media = 0;
  /*
   Comentario
  */
  printf("Insira as 4 notas do aluno 1:\n");
  
  for(int aluno = 0;aluno < alunos;aluno++){
    for(int nota = 0;nota < bimestres;nota++){
      scanf("%f",&notasAlunos[aluno][nota]);
      media += notasAlunos[aluno][nota];  
    }
    mediaAlunos[aluno] = media/bimestres;
    media = 0;
    printf("Insira as 4 notas do aluno %i\n",aluno + 2);
  }

  for(int aluno = 0;aluno < alunos;aluno++){
    printf("A media do aluno %i é %2.f\n",aluno +1 ,mediaAlunos[aluno]);
  }

  
  return 0;
}