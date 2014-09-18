/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSDictionary, NSString;

@interface BBActionResponse : NSObject <NSSecureCoding> {
    NSString *_actionID;
    long long _actionType;
    NSString *_bulletinButtonID;
    NSDictionary *_bulletinContext;
    NSString *_bulletinPublisherID;
    NSString *_bulletinRecordID;
    NSDictionary *_context;
}

@property(copy) NSString * actionID;
@property long long actionType;
@property(copy) NSString * bulletinButtonID;
@property(copy) NSDictionary * bulletinContext;
@property(copy) NSString * bulletinPublisherID;
@property(copy) NSString * bulletinRecordID;
@property(copy) NSDictionary * context;

+ (id)actionResponseForResponse:(id)arg1 bulletinRequest:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)actionID;
- (long long)actionType;
- (id)bulletinButtonID;
- (id)bulletinContext;
- (id)bulletinPublisherID;
- (id)bulletinRecordID;
- (id)context;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setActionID:(id)arg1;
- (void)setActionType:(long long)arg1;
- (void)setBulletinButtonID:(id)arg1;
- (void)setBulletinContext:(id)arg1;
- (void)setBulletinPublisherID:(id)arg1;
- (void)setBulletinRecordID:(id)arg1;
- (void)setContext:(id)arg1;

@end