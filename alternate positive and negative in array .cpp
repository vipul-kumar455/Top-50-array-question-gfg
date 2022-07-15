void rearrange(int arr[], int n) {
	    vector<int> neg, pos;
	    for (int i = 0; i < n; i++) {

	        if (arr[i] < 0)
	            neg.push_back(arr[i]);
	        else
	            pos.push_back(arr[i]);
	    }

	    int i = 0, j = 0, k = 0;
	    while (i < neg.size() && j < pos.size()) {
	        arr[k++] = pos[j++];
	        arr[k++] = neg[i++];
	    }
	    while (j < pos.size()) { arr[k++] = pos[j++]; }

	    while (i < neg.size()) { arr[k++] = neg[i++]; }
	}