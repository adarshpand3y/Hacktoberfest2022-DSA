#include<bits/stdc++.h>
using namespace std;
template<typename T>
class mapnode{
    public:
        string key;
        T value;
        mapnode* next;

        mapnode(string key, T value){
            this->key=key;
            this->value=value;
            next=NULL:
        }

        ~mapnode(){
            delete next;
        }
};
template<typename T>
class ourmap{
    mapnode<T>** buckets;
    int size;
    int numbuckets;
    public:
        ourmap(){
            count=0;
            numbuckets=5;
            buckets=new mapnode<T>*[numbuckets];
            for(int i=0;i<numbuckets;i++){
                buckets[i]=NULL;
            }
        }
        ~ourmap(){
            for(int i=0;i<numbuckets;i++){
                delete buckets[i];
            }
            delete [] buckets;
        }

        int size(){
            return count;
        }

        T getvalue(string key){

        }
    private:
        int getbucketindex(string key){
            int hashcode=0;
            int coeff=1;
            for(int i=key.length()-1;i>=0;i--){
                hashcode+=key[i]*coeff;
                coeff*=37;
                coeff=coeff%numbuckets;
            }
            return hashcode%numbuckets;
        }

    public:
        void insert(string key, T value){
            int bucketindex=getbucketindex(string key);
            mapnode<T> *node=new mapnode<T>;
           while (arr[hashIndex] != NULL
               && arr[hashIndex]->key != key
               && arr[hashIndex]->key != -1) {
            hashIndex++;
            hashIndex %= capacity;
        }
        if (arr[hashIndex] == NULL
            || arr[hashIndex]->key == -1)
            size++;
        arr[hashIndex] = temp;
        }

        T remove(string key){
            int hashIndex = hashCode(key);
            while (arr[hashIndex] != NULL) {
                // if node found
                if (arr[hashIndex]->key == key) {
                    HashNode<K, V>* temp = arr[hashIndex];
                    arr[hashIndex] = dummy;
                    size--;
                    return temp->value;
                }
                hashIndex++;
                hashIndex %= capacity;
        }
        return NULL;
        }
        
         void display(){
          for (int i = 0; i < numbuckets; i++) {
              if (arr[i] != NULL && arr[i]->key != -1)
                  cout << "key = " << arr[i]->key<< "  value = "<< arr[i]->value << endl;
          }
        }

};
int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    ourmap<int, int>* h = new ourmap<int, int>;
    h->insert(1, 1);
    h->insert(2, 2);
    h->insert(2, 3);
    h->display();
    cout << h->size() << endl;
    cout << h->remove(2) << endl;
    cout << h->size() << endl;
    cout << h->isEmpty() << endl;
    cout << h->get(2);
  
    return 0;


}
