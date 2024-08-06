Code-:
long long minAmountRequired(int n, vector<int> &station, int p) {
       if (p == 1) {
        return 1; // Base case: Only need to buy one property
    }

    // Add virtual stations at the extreme ends
    station.push_back(-1000000000);
    station.push_back(1000000000);
    
    sort(station.begin(), station.end()); // Sort station positions

    int left = 1, right = p; // Binary search bounds
    n += 2; // Include virtual stations in the count
    long long minCost = LLONG_MAX; // Initialize minimum cost

    while (left <= right) 
    {
        int mid =(left+right)/2; // Current cover distance
        int needed = p; // Properties needed to be picked
        long long cost = 0; // Total cost for current cover distance
        int remaining = mid; // Remaining coverage
       
        int picked = 0; // Number of properties picked

        for (int i = 1; i < n - 1; ++i)
        {
            // Pick properties on the left side
            int pickLeft = remaining;
            picked += pickLeft;
           
            cost += ((long long)pickLeft * (long long)(pickLeft + 1)) / 2;

            // Pick properties on the right side
            int distance = (station[i + 1] - station[i] - 1);
            int pickRight = min(mid, (distance + 1) / 2);
            picked += pickRight;
           
            cost += ((long long)pickRight * (long long)(pickRight + 1)) / 2;

            remaining = min(mid, distance - pickRight); // Update remaining coverage
        }

        // Check if enough properties were picked
        if (picked >= needed) {
            minCost = cost - ((long long)mid * (long long)(picked - needed));
            right = mid - 1; // Try with smaller cover distance
        } else {
            left = mid + 1; // Try with larger cover distance
        }
    }
    return minCost; // Return the minimum cost found
    }