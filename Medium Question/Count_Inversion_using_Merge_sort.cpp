int value=0;
  void merge(vector<int> &arr, int low, int mid, int high)
  {
      int n1 = mid - low + 1;
      int n2 = high - mid;
      vector<int>a(n1), b(n2);
      
      for(int i=0;i<n1;i++)
    {
        a[i]=arr[low+i];
    }
    for(int j=0;j<n2;j++)
    {
        b[j]=arr[mid+j+1];
    }
     int i=0, j=0, k=low;
      
      while(i<n1 && j<n2)
      {
          if(a[i] <= b[j])
          {
              
              arr[k] = a[i];
              i++;
              k++;
          }
          else
          {
                 //  1 2 3 4 5.. i=1, n= 5/// n-i.. to add 
              int n = a.size() - i;
              value += n;
              arr[k] = b[j];
              k++;
              j++;
          }
      }

      while(i<n1)
      {
          arr[k] = a[i];
          k++;
          i++;
      }
      while(j<n2)
      {
          arr[k] = b[j];
          k++;
          j++;
      }

      
  }
  
    void mergeBreak(vector<int> &arr, int low, int high)
    {
        
        if(low<high)
        {
            int mid = low+(high-low)/2;
            
            mergeBreak(arr, low, mid);
            mergeBreak(arr, mid+1, high);
            
            merge(arr, low, mid, high);
        }
        
    }
    int inversionCount(vector<int> &arr) {
        mergeBreak(arr, 0, arr.size()-1);
        return value;
    }
