/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUSymbol : NSObject {
    NSString * _name;
    VMUSourceInfo * _sourceInfo;
}

- (void)dealloc;
- (id)initWithSymbolicator:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg1 address:(unsigned long long)arg2;
- (id)name;
- (id)sourceInfoForAddress:(unsigned long long)arg1;

@end
