/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSURLQueue : NSObject {
    BOOL  _pad1;
    BOOL  _pad2;
    BOOL  _pad3;
    unsigned int  count;
    NSURLQueueNode * head;
    id  monitor;
    NSURLQueueNode * tail;
    BOOL  waitOnTake;
}

+ (id)newNode;

- (void)clear;
- (unsigned int)count;
- (void)dealloc;
- (int)indexOf:(id)arg1;
- (id)init;
- (BOOL)isEmpty;
- (id)peek;
- (id)peekAt:(unsigned int)arg1;
- (void)put:(id)arg1;
- (BOOL)remove:(id)arg1;
- (void)setWaitOnTake:(BOOL)arg1;
- (id)take;
- (BOOL)waitOnTake;

@end
