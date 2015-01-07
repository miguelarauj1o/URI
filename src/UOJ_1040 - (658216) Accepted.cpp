#include <iostream>

using namespace std;

int main()
{
	float n1, n2, n3, n4;

	cin >> n1 >> n2 >> n3 >> n4;

	float med = ((n1/10) * 2) + ((n2/10) * 3) + ((n3/10) * 4) + ((n4/10) * 1);

	cout << "Media: " << med << endl;

	if(med >= 7.0){
		cout << "Aluno aprovado." << endl;
	}else if(med < 5.0){
		cout << "Aluno reprovado." << endl;
	}else{
		cout << "Aluno em exame." << endl;
		
		float ex;
		cin >> ex;
		cout << "Nota do exame: " << ex << endl;

		if((ex + med) / 2 >= 5.0){
			cout << "Aluno aprovado." << endl;
		}else{
			cout << "Aluno reprovado." << endl;
		}

		cout << "Media final: " << (ex + med) / 2 << endl;
	}

	return 0;
}