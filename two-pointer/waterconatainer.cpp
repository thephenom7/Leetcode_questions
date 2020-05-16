        if(heights.size()==0 || heights.size()==1)return 0;
        int maximum=INT_MIN;
        int i=0;
        int j=heights.size()-1;
        while(i<j)
        {
            int minimum=min(heights[i],heights[j]);
            maximum=max(maximum,minimum*(j-i));
            if(heights[i]<heights[j])
                i++;
            else
                j--;
        }
        return maximum;
