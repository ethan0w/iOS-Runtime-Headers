/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface _ICQUpgradeFlowSpecification : _ICQFlowSpecification {
    BOOL  _needsWiFi;
    int  _offerType;
    NSDictionary * _serverDict;
}

@property (nonatomic) BOOL needsWiFi;
@property (nonatomic) int offerType;
@property (nonatomic, readonly) NSDictionary *serverDict;

+ (id)_upgradePageIdentifierForError:(id)arg1;
+ (id)sanitizedUpgradeFlowServerDict:(id)arg1;
+ (id)upgradeFlowSpecificationSampleForLevel:(int)arg1;

- (void).cxx_destruct;
- (id)initWithServerDictionary:(id)arg1;
- (BOOL)needsWiFi;
- (int)offerType;
- (id)serverDict;
- (void)setNeedsWiFi:(BOOL)arg1;
- (void)setOfferType:(int)arg1;
- (id)upgradeFailurePage;
- (id)upgradeFailurePageForNetwork;
- (id)upgradePageForError:(id)arg1;
- (id)upgradePageForSuccess:(BOOL)arg1;
- (id)upgradeSuccessPage;
- (id)upgradeSuccessPageForWiFi;

@end
