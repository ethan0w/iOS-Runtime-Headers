/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface NMSOutgoingRequest : NSObject <NMSDeviceTargetable, NMSObfuscatableDescriptionProviding> {
    NSData * _data;
    NSDictionary * _extraIDSOptions;
    NSString * _idsIdentifier;
    NMSMessageCenter * _messageCenter;
    unsigned short  _messageID;
    id  _pbRequest;
    NSDictionary * _persistentUserInfo;
    unsigned int  _priority;
    double  _responseTimeout;
    double  _sendTimeout;
    BOOL  _shouldEncrypt;
    NSSet * targetDeviceIDs;
}

@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *extraIDSOptions;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *idsIdentifier;
@property (nonatomic) NMSMessageCenter *messageCenter;
@property (nonatomic) unsigned short messageID;
@property (nonatomic, retain) id pbRequest;
@property (nonatomic, retain) NSDictionary *persistentUserInfo;
@property (nonatomic) unsigned int priority;
@property (nonatomic) double responseTimeout;
@property (nonatomic) double sendTimeout;
@property (nonatomic) BOOL shouldEncrypt;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSSet *targetDeviceIDs;

+ (id)requestWithMessageID:(unsigned short)arg1;

- (void).cxx_destruct;
- (id)CPObfuscatedDescriptionObject;
- (id)data;
- (id)description;
- (id)extraIDSOptions;
- (id)idsIdentifier;
- (id)init;
- (id)messageCenter;
- (unsigned short)messageID;
- (id)pbRequest;
- (id)persistentUserInfo;
- (unsigned int)priority;
- (double)responseTimeout;
- (double)sendTimeout;
- (void)setData:(id)arg1;
- (void)setExtraIDSOptions:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setMessageCenter:(id)arg1;
- (void)setMessageID:(unsigned short)arg1;
- (void)setPbRequest:(id)arg1;
- (void)setPersistentUserInfo:(id)arg1;
- (void)setPriority:(unsigned int)arg1;
- (void)setResponseTimeout:(double)arg1;
- (void)setSendTimeout:(double)arg1;
- (void)setShouldEncrypt:(BOOL)arg1;
- (void)setTargetDeviceIDs:(id)arg1;
- (BOOL)shouldEncrypt;
- (id)targetDeviceIDs;

@end
