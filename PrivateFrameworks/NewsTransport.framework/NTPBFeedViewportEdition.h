/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBFeedViewportEdition : PBCodable <NSCopying> {
    NTPBDate * _feedDateRangeEnd;
    NTPBDate * _feedDateRangeStart;
    NTPBDate * _keyDate;
}

@property (nonatomic, retain) NTPBDate *feedDateRangeEnd;
@property (nonatomic, retain) NTPBDate *feedDateRangeStart;
@property (nonatomic, readonly) BOOL hasFeedDateRangeEnd;
@property (nonatomic, readonly) BOOL hasFeedDateRangeStart;
@property (nonatomic, readonly) BOOL hasKeyDate;
@property (nonatomic, retain) NTPBDate *keyDate;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedDateRangeEnd;
- (id)feedDateRangeStart;
- (BOOL)hasFeedDateRangeEnd;
- (BOOL)hasFeedDateRangeStart;
- (BOOL)hasKeyDate;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)keyDate;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setFeedDateRangeEnd:(id)arg1;
- (void)setFeedDateRangeStart:(id)arg1;
- (void)setKeyDate:(id)arg1;
- (void)writeTo:(id)arg1;

@end
