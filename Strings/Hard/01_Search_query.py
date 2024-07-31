import collections

# Ye autocomplete class do parameter sentences or times jitni baar wo appear hue unko le rhi hai 
# aur unko dictionary mai store kar rhi hai using collections.defaultdict()
# unko dictionary banane ke baad zip fucntion ka use krke unko saath me store kr rhi hai in self.sentences


class AutoCompleteSystem():
    def __init__(self, sentences, times):
        # write code for constructor
        self.sentences=collections.defaultdict(lambda:0)
        # print(self.sentences)
        self.acc=''
        for sent,freq in zip(sentences,times):
            self.sentences[sent]=freq


# ye function input humara input value leta hai ya fir kehlo ki input character first character ko leta hai 
# agar first character # nhi hota to it adds it to the empty self.acc string jo ki humari input string hai 
# uske baad we have made an empty array res to show results in array corresponding to the input character
# for loop ka use krke hum using two variables sent,freq humlog check rk rhe hai that wether the input character mathces the first character of the items stroed in our sentences dictionary that we made 
# if matches then we push it to the res array using -freq kyuki jiski frequency sabse zyada hai wo pehle dikhaa hai in our search results to basically we are showing it in descending order and fir hum usko out of the for loop me bhi ussi tareeke se sort kr rhe hai 
# then we are returning the first 3 values from the descendingly sorted array of ours using res[:3] or jo lambda function ka use kiya hai that is to diplay the second or the element that has index 1 in our defaultdict which is nothing but the key of our sentences that is the actual sentence kyuki value is the number of times 
# else me agar # hita hai to hum iss slef.acc to apne sentences me add krdete hai 
# and hum log self.acc yaani apni input string ko wapas se empty set kr dete hai
# or hum log empty result array display krate hai to show that nothing matches the input character


    def input(self,c):
        if c!='#':
            self.acc +=c
            res=[]
            for sent,freq in self.sentences.items():
                if sent.startswith(self.acc):
                    res.append((-freq,sent))
            res.sort()
            return list(map(lambda x:x[1],res[:3]))
        else:
            self.sentences[self.acc] +=1
            self.acc=''
            return []
        




        

        
