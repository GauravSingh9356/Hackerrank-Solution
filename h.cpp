#include <bits/stdc++.h>

using namespace std;



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    int k;
    int strings_count;
    cin >> strings_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> strings(strings_count);

    for (int i = 0; i < strings_count; i++) {
        string strings_item;
        getline(cin, strings_item);

        strings[i] = strings_item;
    }

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        string queries_item;
        getline(cin, queries_item);

        queries[i] = queries_item;
    }
    string c;
    int arr[100];
for(int i=0;i<strings_count;i++)
{   c=queries[i];
    for(int j=0;j<strings_count;j++)
    {
    if(c==strings[j])
    {
        k++;
    }
   
    }
     
    arr[i]=k;
    k=0;


}

for(int z=0;z<100;z++)
{
    cout<<arr[z]<<endl;
}
}
