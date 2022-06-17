int copyEven(int n,int res []){
    int id_res = 0;
    for(int i = 0;i<n;++i){
        if(i%2 == 0){
            res[id_res] = i;
            ++id_res;
        }
    }
    return id_res;
}


int main() {
    int res[100];
    int num_even = copyEven(100,res);
    printArray(re,num_even);
}
