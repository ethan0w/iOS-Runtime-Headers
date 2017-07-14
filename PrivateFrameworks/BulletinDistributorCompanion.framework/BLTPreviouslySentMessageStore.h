/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPreviouslySentMessageStore : NSObject {
    BOOL  _dirty;
    NSMutableDictionary * _messageDigests;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _saveTimer;
}

@property (nonatomic) BOOL dirty;

- (void).cxx_destruct;
- (void)_cancelSave;
- (void)_enqueueSave;
- (void)_save;
- (void)clear;
- (void)dealloc;
- (BOOL)dirty;
- (id)initWithMessageStorePath:(id)arg1;
- (void)invalidate;
- (BOOL)isEmpty;
- (id)messageDigestForUnsentMessage:(id)arg1 messageKey:(id)arg2;
- (void)recordMessageDigestAsPreviouslySent:(id)arg1 messageKey:(id)arg2;
- (void)removeDigestForKey:(id)arg1;
- (void)setDirty:(BOOL)arg1;

@end
