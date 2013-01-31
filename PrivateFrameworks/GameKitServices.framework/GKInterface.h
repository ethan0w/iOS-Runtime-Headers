/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSNumber, NSString;

@interface GKInterface : NSObject  {
    NSNumber *_index;
    NSString *_bsdName;
    NSString *_type;
    unsigned int _priority;
}

@property(retain) NSNumber * index;
@property(copy) NSString * bsdName;
@property(copy) NSString * type;
@property unsigned int priority;

+ (id)interfaceWithInterfaceIndex:(id)arg1;
+ (id)bsdNameForIndex:(id)arg1;

- (id)type;
- (id)description;
- (void)dealloc;
- (void)setBsdName:(id)arg1;
- (id)bsdName;
- (void)setIndex:(id)arg1;
- (void)setPriority:(unsigned int)arg1;
- (unsigned int)priority;
- (id)index;
- (void)setType:(id)arg1;

@end
