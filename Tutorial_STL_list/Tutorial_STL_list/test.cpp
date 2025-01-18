#include <iostream>
#include <unordered_set>
#include <vector>
#include <stack>
#include <algorithm>
#include <unordered_map>
using namespace std;

void insertionSort(vector<int>& v)
{

	for (int i = 1; i < v.size(); i++)
	{
		int j = i;
		while (j > 0)
		{
			if (v[j] < v[j - 1])
			{
				int temp = v[j];
				v[j] = v[j - 1];
				v[j - 1] = temp;
				j--;
			}
			else
			{
				break;
			}
		}
	}
}

int carFleet(int target, vector<int>& position, vector<int>& speed) {
    vector<pair<int, int>> pair;
    for (int i = 0; i < position.size(); i++)
    {
        pair.push_back({ position[i], speed[i] });
    }

    sort(pair.rbegin(), pair.rend()); // reverse sort according to the first index

    vector<double> time(pair.size());
    for (int i = 0; i < pair.size(); i++)
    {
        double one_time = (double)(target - pair[i].first) / pair[i].second;
        time[i] = one_time;
    }

    stack<double> stk;
    for (int i = 0; i < time.size(); i++)
    {
        if (i == 0)
        {
            stk.push(time[i]);
        }
        else
        {
            if (time[i] > stk.top())
            {
                stk.push(time[i]);
            }
        }
    }
    return stk.size();
}

class Solution1 {
public:
    int search(vector<int>& nums, int target) {
        int mid = nums.size() / 2;
        int right = nums.size() - 1;
        int left = 0;

        while(true)
        {
            if(mid == (left+right)/2)
            {
                if(target==nums[mid])
                {
                    return mid;
                }
                else if(target==nums[left])
                {
                    return left;
                }
                else if(target==nums[right])
                {
                    return right;
                }
                else
                {
                    return -1;
                }
            }
            else
            {
                if(target == nums[mid])
                {
                    return mid;
                }
                else if(target > nums[mid])
                {
                    left = mid;
                    mid = (left+right)/2;
                    
                }
                else if(target < nums[mid])
                {
                    right = mid;
                    mid = (left+right)/2;
                    
                }
            }
        }
        
    }
};


class Solution2 {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> position_speed_pair;
        for (int i = 0; i < position.size(); i++)
        {
            position_speed_pair.push_back({ position[i], speed[i] });
        }

        sort(position_speed_pair.rbegin(), position_speed_pair.rend());

        vector<double> times(position_speed_pair.size());
        for (auto p : position_speed_pair)
        {
            times.push_back((double)((target - p.first) / p.second));
        }

        stack<double> stk;
        for (double time : times)
        {
            if (!stk.size())
            {
                stk.push(time);
            }
            else if (time > stk.top())
            {
                stk.push(time);
            }
        }
        return stk.size();
    }
};

int lengthOfLongestSubstring(string s) {
    int L = 0;
    int R = 0;
    int max_length = 0;
    int length = 0;

    unordered_set<char> char_set;

    while (R <= s.size() - 1)
    {

        if (char_set.find(s[R]) == char_set.end())
        {
            char_set.insert(s[R]);
            length++;
            R++;
            if (length > max_length)
            {
                max_length = length;
            }
        }
        else
        {
            while (char_set.find(s[R]) != char_set.end())
            {
                char_set.erase(s[L]);
                length--;
                L++;
            }
        }
    }
    return max_length;
}

int find_max_freq(unordered_map<char, int> map)
{
    unordered_map<char, int>::iterator itBegin = map.begin();
    int max_freq = (*itBegin).second;

    for (auto pair : map)
    {
        if (pair.second > max_freq)
        {
            max_freq = pair.second;
        }
    }
    return max_freq;
}

int characterReplacement(string s, int k) {
    int L = 0;
    int R = 0;
    int max_length = 0;
    unordered_map<char, int> char_count;

    while (R < s.size()) {
        char_count[s[R]]++;
        int max_freq = find_max_freq(char_count);
        int curr_length = R - L + 1;

        while (curr_length - max_freq > k) {
            char_count[s[L]]--;
            L++;
            curr_length--;
        }

        max_length = max(curr_length, max_length);
        R++;
    }
    return max_length;
}

bool checkInclusion(string s1, string s2) {
    int s1_count[26] = { 0 };
    for (int i = 0; i < s1.size(); i++)
    {
        s1_count[s1[i] - 'a']++;
    }

    int s1_size = s1.size();

    int s2_count[26] = { 0 };

    for (int i = 0; i < s1.size() - 1; i++)
    {
        s2_count[s2[i] - 'a']++;
    }

    int L = 0;

    for (int R = s1.size() - 1; R < s2.size(); R++)
    {
        s2_count[s2[R] - 'a']++;
        if (s1_count == s2_count)
        {
            return true;
        }
        else
        {
            s2_count[s2[L] - 'a']--;
            L++;
        }
    }

    return false;
}

class Solution {
public:
    bool find_all_char_in_map(unordered_map<char, int> map, string t)
    {
        unordered_map<char, int> char_freq_t;
        for (char c : t)
        {
            char_freq_t[c]++;
        }

        for (char c : t)
        {
            if (map.find(c) == map.end() || map[c] < char_freq_t[c])
            {
                return false;
            }
        }
        return true;
    }

    string minWindow(string s, string t) {
        unordered_map<char, int> char_freq;


        if (s.size() < t.size())
        {
            return "";
        }

        int left = 0;

        int right_start = 0;
        int left_start = 0;

        int left_min = 0;
        int right_min = 0;

        int min_length = s.size();

        bool found = false;

        for (int right = 0; right < s.size(); right++)
        {
            char_freq[s[right]]++;
            if (find_all_char_in_map(char_freq, t))
            {
                right_start = right;
                found = true;
            }

            while (find_all_char_in_map(char_freq, t))
            {
                char_freq[s[left]]--;
                left++;
            }
            left_start = left - 1;

            if (right_start - left_start + 1 <= min_length)
            {
                right_min = right_start;
                left_min = left_start;
            }
        }

        string res = "";
        if (found)
        {
            for (int i = left_start; i <= right_min; i++)
            {
                res += s[i];
            }
        }


        return res;

    }


};


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
    
};

class Solution4 {
public:
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;

        // divide
        while (!fast && !fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* l1 = head;
        ListNode* l2 = slow->next;
        slow->next = NULL;

        // reverse the second half

        ListNode* prev = NULL;

        while (l2)
        {
            ListNode* temp = l2->next;
            l2->next = prev;
            prev = l2;
            l2 = temp;
        }
        l2 = prev;

        // Merge two lists
        ListNode dummy(0);
        ListNode* node = &dummy;

        while (l1 && l2)
        {
            node->next = l1;
            node->next->next = l2;
            node = node->next->next;
            l1 = l1->next;
            l2 = l2->next;
        }

        if (l1)
        {
            node->next = l1;
        }
        else
        {
            node->next = l2;
        }

        head = node->next;
    }
};







int main()
{
	/*vector<int> v = { 2, 4, 3, 5, 1, 6, 7 };

	insertionSort(v);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}*/
   /* vector<int> p = { 8,12,16,11,7 };
    vector<int> s = { 6,9,10,9,7 };
    int res = carFleet(17, p, s);

    cout << res << endl;

    int c = 5/2;
    cout << c << endl;*/

   /* vector<int> v = { -1,0,3,5,9,12 };
    int target = 3;

    int res = sol.search(v, target);

    cout << res << endl;*/

    /*Solution2 sol;

    vector<int> pos = { 4,1,0,7 };
    vector<int> vel = { 2,2,1,1 };

    int res = sol.carFleet(10, pos, vel);

    cout << res << endl;*/

    //string s = "";

    //cout << (int)s.size() - 1 << endl;

    //string s = "BABBA";

    //int res = characterReplacement(s, 1);

    //cout << res << endl;

    //string s1 = "ab";
    //string s2 = "lecabee";

    //cout << checkInclusion(s1, s2);

    /*vector<int> v1 = { 1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
    vector<int> v2 = { 1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };

    cout << (v1 == v2);*/

    //Solution3 sol;

    //unordered_map<char, int> map = { {'x', 1}, {'y', 1}, {'z', 1}};

    //cout << sol.find_all_char_in_map(map, "xyz");

    ////cout << sol.minWindow("abc", "bc");

    Solution4 s4;

    cout << 

	return 0;
}