class Solution:
    def duplicateNumbersXOR(self, nums: List[int]) -> int:
        table={} #大括號 dict 
        for num in nums: #每個數字輪一次
            if num in table: #出現的話
                table[num]+=1 # 次數+1
            else:
                table[num]=1 #地1次出現
        print(table)
        ans=0
        for num in table: #把table輪過一遍
            if table[num] == 2: #如果數字剛好等於2
                ans=ans^num #把答案，依題目要求XOR混起來
        return ans    
    