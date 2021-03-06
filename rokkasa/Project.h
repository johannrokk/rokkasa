//
//  Project.h
//  rokkasa
//
//  Created by Alexander Auer on 17.11.13.
//  Copyright (c) 2013 Alexander Auer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class User;

@interface Project : NSManagedObject

@property (nonatomic, retain) NSString * objectId;
@property (nonatomic, retain) NSString * projectName;
@property (nonatomic, retain) NSDate * createdAt;
@property (nonatomic, retain) NSDate * updatedAt;
@property (nonatomic, retain) NSSet *relUserProject;

-(NSString *)getProjectId;

@end

@interface Project (CoreDataGeneratedAccessors)

- (void)addRelUserProjectObject:(User *)value;
- (void)removeRelUserProjectObject:(User *)value;
- (void)addRelUserProject:(NSSet *)values;
- (void)removeRelUserProject:(NSSet *)values;

@end
