int minimumDistances(int a_count, int* array) {

    int minimuDistance = a_count;
    int count;
    int flag=0;

    for(int i=0; i<a_count; i++){
        count =0;
        for(int j=i+1; j<a_count; j++){
            count++;
            if(i == j){
                continue;
            }
            if(array[i] == array[j]){
                flag = 1;
                if(count < minimuDistance){
                    minimuDistance = count;
                }
                continue;
            }
        }
    }

    if(!flag){
        return -1;
    } else{
        return minimuDistance;
    }

}