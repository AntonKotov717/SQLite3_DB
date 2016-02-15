//
//  DBManager.h
//  SQLite3DBSample
//
//  Created by dev on 12/24/15.
//  Copyright © 2015 dev. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DBManager : NSObject

    -(instancetype) initWithDatabaseFileName:(NSString*)dbFileName;

    @property (nonatomic, strong) NSString *documentsDirectory;
    @property (nonatomic, strong) NSString *databaseFilename;

    -(void)copyDatabaseIntoDocumentsDirectory;

    @property(nonatomic, strong)NSMutableArray *arrResults;

    -(void)runQuery:(const char *)query isQueryExcutable: (BOOL)queryExecutable;

    @property (nonatomic, strong) NSMutableArray *arrColumnNames;
    @property (nonatomic) int affectedRows;
    @property (nonatomic) long long lastInsertedRowID;

    -(NSArray *)loadDataFromDB:(NSString *)query;
    -(void)executeQuery:(NSString *)query;
@end
