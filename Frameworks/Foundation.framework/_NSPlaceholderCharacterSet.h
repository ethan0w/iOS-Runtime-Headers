/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSCharacterSet;

@interface _NSPlaceholderCharacterSet : NSCharacterSet  {
    NSCharacterSet *_original;
    NSCharacterSet *_invertedSet;
    struct { 
        unsigned int _inverted : 1; 
        unsigned int _builtin : 1; 
        unsigned int _isCF : 1; 
        unsigned int _reserved : 29; 
    } _flags;
}


- (unsigned int)retainCount;
- (BOOL)characterIsMember:(unsigned short)arg1;
- (id)retain;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (oneway void)release;
- (id)autorelease;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)invertedSet;
- (BOOL)longCharacterIsMember:(unsigned long)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (BOOL)isEmpty;
- (id)replacementObjectForKeyedArchiver:(id)arg1;
- (void)_expandInverted;
- (id)initWithSet:(id)arg1 options:(unsigned int)arg2;
- (BOOL)isSupersetOfSet:(id)arg1;
- (id)bitmapRepresentation;
- (struct __CFCharacterSet { }*)_expandedCFCharacterSet;
- (BOOL)hasMemberInPlane:(unsigned char)arg1;
- (id)replacementObjectForCoder:(id)arg1;

@end
