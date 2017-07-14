/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTransactionSource : NSObject {
    unsigned long long  _name;
    NSMutableDictionary * _originSources;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (getter=isActive, nonatomic, readonly) BOOL active;
@property (nonatomic, readonly) unsigned long long name;

- (void)dealloc;
- (id)initWithName:(unsigned long long)arg1;
- (BOOL)isActive;
- (unsigned long long)name;
- (void)removeOrigin:(struct _MROrigin { }*)arg1;
- (void)sendPackets:(id)arg1 forOrigin:(struct _MROrigin { }*)arg2;

@end
