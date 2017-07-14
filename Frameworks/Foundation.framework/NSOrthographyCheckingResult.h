/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSOrthographyCheckingResult : NSTextCheckingResult {
    NSOrthography * _orthography;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _range;
}

+ (BOOL)supportsSecureCoding;

- (BOOL)_adjustRangesWithOffset:(int)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 orthography:(id)arg2;
- (id)orthography;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)resultByAdjustingRangesWithOffset:(int)arg1;
- (unsigned long long)resultType;

@end
