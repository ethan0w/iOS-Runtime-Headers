/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class NSMutableDictionary, <MZKeyValueStoreTransactionProcessing>, NSString, NSArray, NSURL;

@interface MZKeyValueStoreTransaction : NSObject  {
    NSString *_domain;
    NSString *_sinceDomainVersion;
    NSURL *_URL;
    <MZKeyValueStoreTransactionProcessing> *_processor;
    NSMutableDictionary *_userInfo;
    int _type;
    NSArray *_keys;
}

@property(copy) NSString * domain;
@property(copy) NSString * sinceDomainVersion;
@property(retain) NSURL * URL;
@property(retain) <MZKeyValueStoreTransactionProcessing> * processor;
@property int type;
@property(readonly) NSArray * keys;
@property(retain) NSMutableDictionary * userInfo;


- (id)processor;
- (id)URL;
- (int)type;
- (id)description;
- (id)userInfo;
- (void)dealloc;
- (id)userInfoValueForKey:(id)arg1;
- (void)setUserInfoValue:(id)arg1 forKey:(id)arg2;
- (id)sinceDomainVersion;
- (void)setProcessor:(id)arg1;
- (void)setSinceDomainVersion:(id)arg1;
- (id)initWithType:(int)arg1 domain:(id)arg2 URL:(id)arg3 keys:(id)arg4;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)setUserInfo:(id)arg1;
- (id)keys;
- (void)setURL:(id)arg1;
- (void)setType:(int)arg1;

@end
