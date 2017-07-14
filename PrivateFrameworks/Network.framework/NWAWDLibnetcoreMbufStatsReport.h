/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWAWDLibnetcoreMbufStatsReport : PBCodable <NSCopying> {
    struct { 
        unsigned int mbuf16KBTotal : 1; 
        unsigned int mbuf256BTotal : 1; 
        unsigned int mbuf2KBTotal : 1; 
        unsigned int mbuf4KBTotal : 1; 
        unsigned int mbufDrainCount : 1; 
        unsigned int mbufMemReleased : 1; 
        unsigned int sockAtMBLimit : 1; 
        unsigned int sockMBcnt : 1; 
    }  _has;
    unsigned long long  _mbuf16KBTotal;
    unsigned long long  _mbuf256BTotal;
    unsigned long long  _mbuf2KBTotal;
    unsigned long long  _mbuf4KBTotal;
    unsigned long long  _mbufDrainCount;
    unsigned long long  _mbufMemReleased;
    unsigned long long  _sockAtMBLimit;
    unsigned long long  _sockMBcnt;
}

@property (nonatomic) BOOL hasMbuf16KBTotal;
@property (nonatomic) BOOL hasMbuf256BTotal;
@property (nonatomic) BOOL hasMbuf2KBTotal;
@property (nonatomic) BOOL hasMbuf4KBTotal;
@property (nonatomic) BOOL hasMbufDrainCount;
@property (nonatomic) BOOL hasMbufMemReleased;
@property (nonatomic) BOOL hasSockAtMBLimit;
@property (nonatomic) BOOL hasSockMBcnt;
@property (nonatomic) unsigned long long mbuf16KBTotal;
@property (nonatomic) unsigned long long mbuf256BTotal;
@property (nonatomic) unsigned long long mbuf2KBTotal;
@property (nonatomic) unsigned long long mbuf4KBTotal;
@property (nonatomic) unsigned long long mbufDrainCount;
@property (nonatomic) unsigned long long mbufMemReleased;
@property (nonatomic) unsigned long long sockAtMBLimit;
@property (nonatomic) unsigned long long sockMBcnt;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMbuf16KBTotal;
- (BOOL)hasMbuf256BTotal;
- (BOOL)hasMbuf2KBTotal;
- (BOOL)hasMbuf4KBTotal;
- (BOOL)hasMbufDrainCount;
- (BOOL)hasMbufMemReleased;
- (BOOL)hasSockAtMBLimit;
- (BOOL)hasSockMBcnt;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)mbuf16KBTotal;
- (unsigned long long)mbuf256BTotal;
- (unsigned long long)mbuf2KBTotal;
- (unsigned long long)mbuf4KBTotal;
- (unsigned long long)mbufDrainCount;
- (unsigned long long)mbufMemReleased;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasMbuf16KBTotal:(BOOL)arg1;
- (void)setHasMbuf256BTotal:(BOOL)arg1;
- (void)setHasMbuf2KBTotal:(BOOL)arg1;
- (void)setHasMbuf4KBTotal:(BOOL)arg1;
- (void)setHasMbufDrainCount:(BOOL)arg1;
- (void)setHasMbufMemReleased:(BOOL)arg1;
- (void)setHasSockAtMBLimit:(BOOL)arg1;
- (void)setHasSockMBcnt:(BOOL)arg1;
- (void)setMbuf16KBTotal:(unsigned long long)arg1;
- (void)setMbuf256BTotal:(unsigned long long)arg1;
- (void)setMbuf2KBTotal:(unsigned long long)arg1;
- (void)setMbuf4KBTotal:(unsigned long long)arg1;
- (void)setMbufDrainCount:(unsigned long long)arg1;
- (void)setMbufMemReleased:(unsigned long long)arg1;
- (void)setSockAtMBLimit:(unsigned long long)arg1;
- (void)setSockMBcnt:(unsigned long long)arg1;
- (unsigned long long)sockAtMBLimit;
- (unsigned long long)sockMBcnt;
- (void)writeTo:(id)arg1;

@end
