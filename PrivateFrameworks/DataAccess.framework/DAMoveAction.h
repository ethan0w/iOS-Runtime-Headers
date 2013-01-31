/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DAMoveAction : DAAction  {
    NSString *_sourceContainerId;
    NSString *_sourceServerId;
    NSString *_destinationContainerId;
}

@property(readonly) NSString * sourceContainerId;
@property(readonly) NSString * sourceServerId;
@property(readonly) NSString * destinationContainerId;


- (void)dealloc;
- (id)destinationContainerId;
- (id)sourceServerId;
- (id)sourceContainerId;
- (id)initWithItemChangeType:(int)arg1 changedItem:(id)arg2 sourceContainerId:(id)arg3 sourceServerId:(id)arg4 destinationContainerId:(id)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
