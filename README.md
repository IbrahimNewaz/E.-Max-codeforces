E - Max
link - Codeforces Sheet #2 (Loops)

 << How I Solved It >>

1 >> The user will give random inputs. I have to collect all those inputs using a test case, which is a loop operation. 
I will declare a variable called int T, where I will get how many times the user will input values.

Logic >>
int T;
while(T--);

Also, I will declare a variable max, which will initially store 0. It will store the maximum value from the user inputs.

2 >> I will run a while loop, which will run until T becomes 0.

Logic >>
while(T--) { }

3 >> Inside the loop, I will collect all the values given by the user using the scanf() function. 
I will also declare a variable called int x.

4 >> Now I will use a simple if condition to check which value is the maximum. 
If a larger value is found, I will store it in the max variable.

Logic >>
if(x > max)
{
    max = x;
}

5 >> Finally, I will print the maximum value.
courtesy - My mentor Mr. Mahmud Pias.


🟩 Bangla >>>

 << আমি যেভাবে সমাধান করেছি >>

1 >> ইউজার কিছু র‍্যান্ডম ইনপুট দিবে। আমাকে এই ইনপুটগুলো একটি টেস্ট কেস (লুপ) ব্যবহার করে নিতে হবে। 
আমি int T নামে একটি ভেরিয়েবল ডিক্লেয়ার করব, যেখানে ইউজার কয়বার ইনপুট দিবে তা রাখা হবে।

লজিক >>
int T;
while(T--);

এছাড়াও আমি max নামে একটি ভেরিয়েবল ডিক্লেয়ার করব, যার প্রাথমিক মান হবে 0। 
এখানে ইউজারের দেওয়া সংখ্যাগুলোর মধ্যে সর্বোচ্চ মান রাখা হবে।

2 >> আমি একটি while লুপ চালাব, যা T এর মান 0 হওয়া পর্যন্ত চলবে।

লজিক >>
while(T--) { }

3 >> লুপের ভিতরে আমি scanf() ফাংশন ব্যবহার করে ইউজারের দেওয়া মানগুলো নিব। 
এখানে আমি int x নামে একটি ভেরিয়েবল ব্যবহার করব।

4 >> এখন আমি একটি simple if condition ব্যবহার করে চেক করব কোন মানটি সবচেয়ে বড়। 
যদি x এর মান max থেকে বড় হয়, তাহলে সেটাকে max এ সংরক্ষণ করব।

লজিক >>
if(x > max)
{
    max = x;
}

5 >> শেষে আমি সর্বোচ্চ মানটি প্রিন্ট করব।



