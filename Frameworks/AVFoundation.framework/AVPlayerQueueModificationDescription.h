/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerQueueModificationDescription : NSObject {
    AVPlayerItem * _afterItem;
    AVPlayerItem * _item;
    int  _modificationType;
}

@property (nonatomic, readonly) AVPlayerItem *afterItem;
@property (nonatomic, readonly) AVPlayerItem *item;
@property (nonatomic, readonly) int modificationType;

+ (id)modificationForInsertingItem:(id)arg1 afterItem:(id)arg2;
+ (id)modificationForRemovingItem:(id)arg1;

- (id)afterItem;
- (void)dealloc;
- (id)init;
- (id)initWithModificationType:(int)arg1 item:(id)arg2 afterItem:(id)arg3;
- (id)item;
- (int)modificationType;

@end
