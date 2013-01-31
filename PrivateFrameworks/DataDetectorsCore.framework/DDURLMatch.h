/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

@class NSString;

@interface DDURLMatch : NSObject  {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    NSString *_url;
}


- (int)compare:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 url:(id)arg2;
- (id)url;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;

@end
