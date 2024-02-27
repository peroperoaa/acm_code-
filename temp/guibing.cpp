void merge(int array[], int left , int mid , int right){   //归并排序
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    //创建临时数组
    int L[n1], R[n2];
    //将数据复制到临时数组 L和R
    for(i = 0;i < n1; i++){
        L[i] = array[left + i];
    }
    for(j = 0;j < n2; j++){
        R[j] = array[mid + 1 + j];
    }
    //归并临时数组到array[left...right]
    i = 0;
    j = 0;
    k = left;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            array[k] = L[i];
            i++;
        }
        else{
            array[k] = R[j];
            j++;
        }
        k++;
    }
    //复制L的剩余元素(如果有)
    while (i < n1){
        array[k] = L[i];
        i++;
        k++;
    }
    //复制R的剩余元素(如果有)
     while (j < n2){
        array[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int array[], int left, int right){
    if(left < right){
        int mid = left + (right - left) / 2;
        //递归地对左半部分进行归并排序
        mergeSort(array, left, mid);
        //递归地对右半部分进行归并排序
        mergeSort(array, mid + 1, right);
        //合并两个有序数组
        merge(array, left, mid, right);
    }
}