/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryPairingEvent : HMDLogEvent <HMDAWDLogEvent> {
    BOOL  _addOperation;
    BOOL  _addViaWAC;
    int  _linkType;
    AWDHomeKitVendorInformation * _vendorInfo;
}

@property (getter=isAddOperation, nonatomic, readonly) BOOL addOperation;
@property (getter=isAddViaWAC, nonatomic) BOOL addViaWAC;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) int linkType;
@property (readonly) Class superclass;
@property (nonatomic, retain) AWDHomeKitVendorInformation *vendorInfo;

+ (void)initialize;
+ (id)pairingAccessory:(id)arg1;
+ (id)removingAccessory:(id)arg1 hapAccessory:(id)arg2;
+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)initWithUnpairedAccessory:(id)arg1 pairedAccessory:(id)arg2 hapAccessory:(id)arg3 isAddOperation:(BOOL)arg4;
- (BOOL)isAddOperation;
- (BOOL)isAddViaWAC;
- (int)linkType;
- (id)metricForAWD;
- (void)pairedAccessory:(id)arg1;
- (void)pairedToServer:(id)arg1;
- (void)setAddViaWAC:(BOOL)arg1;
- (void)setLinkType:(int)arg1;
- (void)setVendorInfo:(id)arg1;
- (id)vendorInfo;

@end
