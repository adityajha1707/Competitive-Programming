void merge(int *input,int si,int mid,int ei){
    int *dummy = new int[ei-si+1];
    int a = si,b = mid + 1,c = 0;
    while(a <= mid && b <= ei){
        if(input[a] < input[b]){
            dummy[c++] = input[a++];
        }
        else{
            dummy[c++] = input[b++];
        }
    }
    while(a <= mid){
        dummy[c++] = input[a++];
    }
    while(b <= ei){
        dummy[c++] = input[b++];
    }
    a = si;
    for(int i = 0; i < ei-si+1; i++){
        input[a++] = dummy[i];
    }
}
void merge_sort(int *input,int si,int ei){
    if(si >= ei){
        return;
    }
    int mid = (si + ei)/2;
    merge_sort(input,si,mid);
    merge_sort(input,mid+1,ei);
    merge(input,si,mid,ei);
}


