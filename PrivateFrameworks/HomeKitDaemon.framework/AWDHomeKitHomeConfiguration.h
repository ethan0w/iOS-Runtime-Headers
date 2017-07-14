/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitHomeConfiguration : PBCodable <NSCopying> {
    struct { 
        unsigned int numAccessories : 1; 
        unsigned int numAccessoryServiceGroups : 1; 
        unsigned int numAdmins : 1; 
        unsigned int numEventTriggers : 1; 
        unsigned int numRooms : 1; 
        unsigned int numScenes : 1; 
        unsigned int numServices : 1; 
        unsigned int numTimerTriggers : 1; 
        unsigned int numTriggers : 1; 
        unsigned int numUsers : 1; 
        unsigned int numZones : 1; 
        unsigned int isPrimaryResident : 1; 
        unsigned int isResidentAvailable : 1; 
    }  _has;
    BOOL  _isPrimaryResident;
    BOOL  _isResidentAvailable;
    unsigned int  _numAccessories;
    unsigned int  _numAccessoryServiceGroups;
    unsigned int  _numAdmins;
    unsigned int  _numEventTriggers;
    unsigned int  _numRooms;
    unsigned int  _numScenes;
    unsigned int  _numServices;
    unsigned int  _numTimerTriggers;
    unsigned int  _numTriggers;
    unsigned int  _numUsers;
    unsigned int  _numZones;
}

@property (nonatomic) BOOL hasIsPrimaryResident;
@property (nonatomic) BOOL hasIsResidentAvailable;
@property (nonatomic) BOOL hasNumAccessories;
@property (nonatomic) BOOL hasNumAccessoryServiceGroups;
@property (nonatomic) BOOL hasNumAdmins;
@property (nonatomic) BOOL hasNumEventTriggers;
@property (nonatomic) BOOL hasNumRooms;
@property (nonatomic) BOOL hasNumScenes;
@property (nonatomic) BOOL hasNumServices;
@property (nonatomic) BOOL hasNumTimerTriggers;
@property (nonatomic) BOOL hasNumTriggers;
@property (nonatomic) BOOL hasNumUsers;
@property (nonatomic) BOOL hasNumZones;
@property (nonatomic) BOOL isPrimaryResident;
@property (nonatomic) BOOL isResidentAvailable;
@property (nonatomic) unsigned int numAccessories;
@property (nonatomic) unsigned int numAccessoryServiceGroups;
@property (nonatomic) unsigned int numAdmins;
@property (nonatomic) unsigned int numEventTriggers;
@property (nonatomic) unsigned int numRooms;
@property (nonatomic) unsigned int numScenes;
@property (nonatomic) unsigned int numServices;
@property (nonatomic) unsigned int numTimerTriggers;
@property (nonatomic) unsigned int numTriggers;
@property (nonatomic) unsigned int numUsers;
@property (nonatomic) unsigned int numZones;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIsPrimaryResident;
- (BOOL)hasIsResidentAvailable;
- (BOOL)hasNumAccessories;
- (BOOL)hasNumAccessoryServiceGroups;
- (BOOL)hasNumAdmins;
- (BOOL)hasNumEventTriggers;
- (BOOL)hasNumRooms;
- (BOOL)hasNumScenes;
- (BOOL)hasNumServices;
- (BOOL)hasNumTimerTriggers;
- (BOOL)hasNumTriggers;
- (BOOL)hasNumUsers;
- (BOOL)hasNumZones;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPrimaryResident;
- (BOOL)isResidentAvailable;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numAccessories;
- (unsigned int)numAccessoryServiceGroups;
- (unsigned int)numAdmins;
- (unsigned int)numEventTriggers;
- (unsigned int)numRooms;
- (unsigned int)numScenes;
- (unsigned int)numServices;
- (unsigned int)numTimerTriggers;
- (unsigned int)numTriggers;
- (unsigned int)numUsers;
- (unsigned int)numZones;
- (BOOL)readFrom:(id)arg1;
- (void)setHasIsPrimaryResident:(BOOL)arg1;
- (void)setHasIsResidentAvailable:(BOOL)arg1;
- (void)setHasNumAccessories:(BOOL)arg1;
- (void)setHasNumAccessoryServiceGroups:(BOOL)arg1;
- (void)setHasNumAdmins:(BOOL)arg1;
- (void)setHasNumEventTriggers:(BOOL)arg1;
- (void)setHasNumRooms:(BOOL)arg1;
- (void)setHasNumScenes:(BOOL)arg1;
- (void)setHasNumServices:(BOOL)arg1;
- (void)setHasNumTimerTriggers:(BOOL)arg1;
- (void)setHasNumTriggers:(BOOL)arg1;
- (void)setHasNumUsers:(BOOL)arg1;
- (void)setHasNumZones:(BOOL)arg1;
- (void)setIsPrimaryResident:(BOOL)arg1;
- (void)setIsResidentAvailable:(BOOL)arg1;
- (void)setNumAccessories:(unsigned int)arg1;
- (void)setNumAccessoryServiceGroups:(unsigned int)arg1;
- (void)setNumAdmins:(unsigned int)arg1;
- (void)setNumEventTriggers:(unsigned int)arg1;
- (void)setNumRooms:(unsigned int)arg1;
- (void)setNumScenes:(unsigned int)arg1;
- (void)setNumServices:(unsigned int)arg1;
- (void)setNumTimerTriggers:(unsigned int)arg1;
- (void)setNumTriggers:(unsigned int)arg1;
- (void)setNumUsers:(unsigned int)arg1;
- (void)setNumZones:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
