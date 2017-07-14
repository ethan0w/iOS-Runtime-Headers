/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface AWDMailNetworkDiagnosticsReport : PBCodable <NSCopying> {
    BOOL  _cellData;
    NSString * _dataIndicator;
    int  _dataInterface;
    BOOL  _dnsEnabled;
    struct { 
        unsigned int numActiveCalls : 1; 
        unsigned int numBackgroundWifiClients : 1; 
        unsigned int timestamp : 1; 
        unsigned int dataInterface : 1; 
        unsigned int reachabilityFlags : 1; 
        unsigned int cellData : 1; 
        unsigned int dnsEnabled : 1; 
        unsigned int roamingAllowed : 1; 
        unsigned int wifiEnabled : 1; 
    }  _has;
    unsigned long long  _numActiveCalls;
    unsigned long long  _numBackgroundWifiClients;
    unsigned int  _reachabilityFlags;
    BOOL  _roamingAllowed;
    unsigned long long  _timestamp;
    BOOL  _wifiEnabled;
}

@property (nonatomic) BOOL cellData;
@property (nonatomic, retain) NSString *dataIndicator;
@property (nonatomic) int dataInterface;
@property (nonatomic) BOOL dnsEnabled;
@property (nonatomic) BOOL hasCellData;
@property (nonatomic, readonly) BOOL hasDataIndicator;
@property (nonatomic) BOOL hasDataInterface;
@property (nonatomic) BOOL hasDnsEnabled;
@property (nonatomic) BOOL hasNumActiveCalls;
@property (nonatomic) BOOL hasNumBackgroundWifiClients;
@property (nonatomic) BOOL hasReachabilityFlags;
@property (nonatomic) BOOL hasRoamingAllowed;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasWifiEnabled;
@property (nonatomic) unsigned long long numActiveCalls;
@property (nonatomic) unsigned long long numBackgroundWifiClients;
@property (nonatomic) unsigned int reachabilityFlags;
@property (nonatomic) BOOL roamingAllowed;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL wifiEnabled;

- (void).cxx_destruct;
- (BOOL)cellData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataIndicator;
- (int)dataInterface;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)dnsEnabled;
- (BOOL)hasCellData;
- (BOOL)hasDataIndicator;
- (BOOL)hasDataInterface;
- (BOOL)hasDnsEnabled;
- (BOOL)hasNumActiveCalls;
- (BOOL)hasNumBackgroundWifiClients;
- (BOOL)hasReachabilityFlags;
- (BOOL)hasRoamingAllowed;
- (BOOL)hasTimestamp;
- (BOOL)hasWifiEnabled;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)numActiveCalls;
- (unsigned long long)numBackgroundWifiClients;
- (unsigned int)reachabilityFlags;
- (BOOL)readFrom:(id)arg1;
- (BOOL)roamingAllowed;
- (void)setCellData:(BOOL)arg1;
- (void)setDataIndicator:(id)arg1;
- (void)setDataInterface:(int)arg1;
- (void)setDnsEnabled:(BOOL)arg1;
- (void)setHasCellData:(BOOL)arg1;
- (void)setHasDataInterface:(BOOL)arg1;
- (void)setHasDnsEnabled:(BOOL)arg1;
- (void)setHasNumActiveCalls:(BOOL)arg1;
- (void)setHasNumBackgroundWifiClients:(BOOL)arg1;
- (void)setHasReachabilityFlags:(BOOL)arg1;
- (void)setHasRoamingAllowed:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasWifiEnabled:(BOOL)arg1;
- (void)setNumActiveCalls:(unsigned long long)arg1;
- (void)setNumBackgroundWifiClients:(unsigned long long)arg1;
- (void)setReachabilityFlags:(unsigned int)arg1;
- (void)setRoamingAllowed:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWifiEnabled:(BOOL)arg1;
- (unsigned long long)timestamp;
- (BOOL)wifiEnabled;
- (void)writeTo:(id)arg1;

@end
