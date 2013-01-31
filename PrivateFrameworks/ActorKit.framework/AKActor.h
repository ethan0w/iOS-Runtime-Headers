/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ActorKit.framework/ActorKit
 */

@class AKMailbox;

@interface AKActor : NSObject <AKActor> {
    AKMailbox *_mailbox;
}


- (void)dealloc;
- (id)init;
- (id)mailbox;
- (id)startThreadDispatchQueue;
- (id)startMigrantDispatchQueue;
- (id)deferredReply;
- (id)send;

@end
