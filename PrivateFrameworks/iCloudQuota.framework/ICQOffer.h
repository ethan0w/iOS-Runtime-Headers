/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface ICQOffer : NSObject {
    NSString * _accountAltDSID;
    _ICQBannerSpecification * _bannerSpecification;
    NSString * _bundleIdentifier;
    _ICQButtonSpecification * _buttonSpecification;
    NSDate * _expirationDate;
    BOOL  _iTunesAccountExists;
    int  _level;
    NSString * _notificationID;
    NSString * _offerId;
    int  _offerType;
    NSDate * _retrievalDate;
    NSDictionary * _serverDictionary;
    _ICQUpgradeFlowSpecification * _upgradeFlowSpecification;
}

@property (nonatomic, readonly) double _callbackInterval;
@property (nonatomic, retain) NSString *accountAltDSID;
@property (nonatomic, readonly) _ICQBannerSpecification *bannerSpecification;
@property (nonatomic, retain) _ICQBannerSpecification *bannerSpecification;
@property (getter=isBuddyOffer, nonatomic, readonly) BOOL buddyOffer;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, readonly) _ICQButtonSpecification *buttonSpecification;
@property (nonatomic, retain) _ICQButtonSpecification *buttonSpecification;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) BOOL expired;
@property (nonatomic, readonly) BOOL iTunesAccountExists;
@property (nonatomic) BOOL iTunesAccountExists;
@property (nonatomic) int level;
@property (nonatomic, retain) NSString *notificationID;
@property (nonatomic, retain) NSString *offerId;
@property (nonatomic, readonly) int offerType;
@property (nonatomic, retain) NSDate *retrievalDate;
@property (nonatomic, readonly) _ICQUpgradeFlowSpecification *upgradeFlowSpecification;
@property (nonatomic, retain) _ICQUpgradeFlowSpecification *upgradeFlowSpecification;

+ (id)sampleOfferForLevel:(int)arg1;

- (void).cxx_destruct;
- (double)_callbackInterval;
- (id)accountAltDSID;
- (id)alertSpecificationAtIndex:(unsigned int)arg1;
- (id)alertSpecificationForAlertKey:(id)arg1;
- (id)bannerSpecification;
- (id)bundleIdentifier;
- (id)buttonSpecification;
- (id)expirationDate;
- (BOOL)iTunesAccountExists;
- (id)initWithServerDictionary:(id)arg1 accountAltDSID:(id)arg2 notificationID:(id)arg3 retrievalDate:(id)arg4 callbackInterval:(double)arg5 bundleIdentifier:(id)arg6;
- (BOOL)isBuddyOffer;
- (BOOL)isExpired;
- (id)keybagForBuyStorage;
- (int)level;
- (id)notificationID;
- (id)offerId;
- (int)offerType;
- (id)retrievalDate;
- (void)setAccountAltDSID:(id)arg1;
- (void)setBannerSpecification:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setButtonSpecification:(id)arg1;
- (void)setITunesAccountExists:(BOOL)arg1;
- (void)setLevel:(int)arg1;
- (void)setNotificationID:(id)arg1;
- (void)setOfferId:(id)arg1;
- (void)setRetrievalDate:(id)arg1;
- (void)setUpgradeFlowSpecification:(id)arg1;
- (id)upgradeFlowSpecification;

@end
