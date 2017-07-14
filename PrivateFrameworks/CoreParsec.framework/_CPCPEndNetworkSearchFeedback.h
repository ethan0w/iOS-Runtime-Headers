/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPCPEndNetworkSearchFeedback : PBCodable <NSCopying, SFEndNetworkSearchFeedback> {
    double  _duration;
    NSString * _fbq;
    struct { 
        unsigned int duration : 1; 
        unsigned int responseSize : 1; 
        unsigned int statusCode : 1; 
    }  _has;
    _CPNetworkTimingData * _networkTiming;
    NSString * _parsecStatus;
    NSString * _partialClientIp;
    long long  _responseSize;
    int  _statusCode;
    unsigned long long  _timestamp;
    NSString * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSString *fbq;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic, readonly) BOOL hasFbq;
@property (nonatomic, readonly) BOOL hasNetworkTiming;
@property (nonatomic, readonly) BOOL hasParsecStatus;
@property (nonatomic, readonly) BOOL hasPartialClientIp;
@property (nonatomic) BOOL hasResponseSize;
@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic, readonly) BOOL hasUuid;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) _CPNetworkTimingData *networkTiming;
@property (nonatomic, copy) NSDictionary *networkTimingData;
@property (nonatomic, retain) NSString *parsecStatus;
@property (nonatomic, retain) NSString *partialClientIp;
@property (nonatomic) long long responseSize;
@property (nonatomic) int statusCode;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, copy) NSString *uuid;
@property (nonatomic, retain) NSString *uuid;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (id)fbq;
- (BOOL)hasDuration;
- (BOOL)hasFbq;
- (BOOL)hasNetworkTiming;
- (BOOL)hasParsecStatus;
- (BOOL)hasPartialClientIp;
- (BOOL)hasResponseSize;
- (BOOL)hasStatusCode;
- (BOOL)hasUuid;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)networkTiming;
- (id)networkTimingData;
- (id)parsecStatus;
- (id)partialClientIp;
- (BOOL)readFrom:(id)arg1;
- (long long)responseSize;
- (void)setDuration:(double)arg1;
- (void)setFbq:(id)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasResponseSize:(BOOL)arg1;
- (void)setHasStatusCode:(BOOL)arg1;
- (void)setNetworkTiming:(id)arg1;
- (void)setNetworkTimingData:(id)arg1;
- (void)setParsecStatus:(id)arg1;
- (void)setPartialClientIp:(id)arg1;
- (void)setResponseSize:(long long)arg1;
- (void)setStatusCode:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuid:(id)arg1;
- (int)statusCode;
- (unsigned long long)timestamp;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
