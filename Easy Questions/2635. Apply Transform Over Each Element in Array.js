var map = function(arr, fn) {
    var array=[];
    for(i=0;i<arr.length;i++)
    {
        array[i]=fn(arr[i],i);
    }
return array;
};
