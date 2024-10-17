#include <iostream>
#include <string>
#include <limits>
#include <cmath>
using namespace std;

/*Brut Force*/
class Solution {
public:
    int maximumSwap(int num)
    {
        string s = to_string(num); // Convertir num en string
        int max1 = num; // Initialiser le maximum à num
        for (int i = 0; i < s.length(); i++) {
            for (int j = i + 1; j < s.length(); j++) {
                string tmp = s; // Créer une copie de s
                swap(tmp[i], tmp[j]); // Permuter les caractères
                int t = stoi(tmp); // Convertir la chaîne en entier
                max1 = max(t, max1); // Mettre à jour max1 si nécessaire
            }
        }
        return max1; // Retourner le plus grand nombre
    }
};

    
int main()
{
    Solution s;
    cout << s.maximumSwap(1993);
}