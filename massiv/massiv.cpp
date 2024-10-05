#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int M, N;
    cout << "Birinci massiv üçün ölçü (M): ";
    cin >> M;
    cout << "İkinci massiv üçün ölçü (N): ";
    cin >> N;

    int A[M], B[N], C[M + N];
    int k = 0;

    cout << "Birinci massivi daxil edin: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    cout << "İkinci massivi daxil edin: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (A[i] == B[j]) {
                bool tapildi = false;
                for (int l = 0; l < k; l++) {
                    if (C[l] == A[i]) {
                        tapildi = true;
                        break;
                    }
                }
                if (!tapildi) {
                    C[k++] = A[i];
                }
            }
        }
    }

    cout << "Ortak olan rəqəmlər: ";
    for (int i = 0; i < k; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    k = 0;
    for (int i = 0; i < M; i++) {
        bool tapildi = false;
        for (int j = 0; j < N; j++) {
            if (A[i] == B[j]) {
                tapildi = true;
                break;
            }
        }
        if (!tapildi) {
            bool var = false;
            for (int l = 0; l < k; l++) {
                if (C[l] == A[i]) {
                    var = true;
                    break;
                }
            }
            if (!var) {
                C[k++] = A[i];
            }
        }
    }

    cout << "Birinci massivdə olub, lakin ikinci massivdə olmayan rəqəmlər: ";
    for (int i = 0; i < k; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    const int SIZE = 20;
    int R[SIZE];

    srand(time(0));

    for (int i = 0; i < SIZE; i++) {
        R[i] = rand() % 31 - 10;
    }

    int maxArdisik = 0, currentArdisik = 0;

    for (int i = 0; i < SIZE; i++) {
        if (R[i] > 0) {
            currentArdisik++;
            if (currentArdisik > maxArdisik) {
                maxArdisik = currentArdisik;
            }
        }
        else {
            currentArdisik = 0;
        }
    }

    cout << "Ən uzun ardışıq müsbət ədədlərin sayı: " << maxArdisik << endl;

    const int SIZE2 = 10;
    int S[SIZE2];
    int pozitiv[SIZE2], negativ[SIZE2];
    int pCount = 0, nCount = 0;

    for (int i = 0; i < SIZE2; i++) {
        S[i] = rand() % 41 - 20;
    }

    for (int i = 0; i < SIZE2; i++) {
        if (S[i] >= 0) {
            pozitiv[pCount++] = S[i];
        }
        else {
            negativ[nCount++] = S[i];
        }
    }

    cout << "Müsbət ədədlər: ";
    for (int i = 0; i < pCount; i++) {
        cout << pozitiv[i] << " ";
    }
    cout << "\nMənfi ədədlər: ";
    for (int i = 0; i < nCount; i++) {
        cout << negativ[i] << " ";
    }
    cout << endl;

    return 0;
}
